import os, subprocess

def find_file(directory_name:str):
    tab = os.listdir(directory_name)
    return tab

def verif(maps, result, solved):
    cmp_win = 0
    cmp_err = 0
    for i in range(len(result)):
        if (result[i] != solved[i]):
            print("Erreur with : ", maps[i])
            cmp_err += 1
        else:
            print("solved : ", maps[i])
            cmp_win += 1
    print(cmp_win, " solved")
    print(cmp_err, "error")
    return 0

def solved_map():
    tab_solved = find_file("example_files/solved/")
    tab = []
    for el in tab_solved:
        path = "example_files/solved/" + el
        with open(path, 'r', encoding='utf-8') as fichier:
            tab.append(fichier.read())
    return tab

def get_ouput(commande):
    result = subprocess.run(commande, capture_output=True, text=True)
    return result.stdout


def process():
    tab_unsolved = find_file("example_files/maps/")
    tab_result = []
    for el in tab_unsolved:
        exec = "./setting_up"
        args = "example_files/maps/" + el
        com = [exec, args]
        result = get_ouput(com)
        tab_result.append(result)
    tab_solved = solved_map()
    verif(tab_unsolved, tab_result, tab_solved)
    return 0

def main():
    process()

if  __name__ == "__main__":
    main()