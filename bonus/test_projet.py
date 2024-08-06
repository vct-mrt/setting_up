import os, subprocess

def find_file(directory_name:str):
    tab = os.listdir(directory_name)
    return tab

def verif(maps, result, solved):
    cmp_win, cmp_err = 0, 0
    tab_result, tab_solved = [], []
    cmp = 0
    for i in range(len(result)):
        if (result[i] != solved[i]):
            print(cmp, ". Erreur with : ", maps[i])
            cmp_err += 1
            tab_result.append(result[i])
            tab_solved.append(solved[i])
            cmp += 1
        else:
            print("solved : ", maps[i])
            cmp_win += 1
    print(cmp_win, " solved")
    print(cmp_err, "error")
    return tab_result, tab_solved

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

def compar_txt(solved:str, result:str):
    tab_solved = solved.split('\n')
    tab_result = result.split('\n')
    tab_line_dif = []
    print("Solved : ")
    for i in range(len(tab_solved)):
        print(i , "->\t", tab_solved[i])
        if (tab_solved[i] != tab_result[i]):
            tab_line_dif.append(i)
    print("")
    print("Your result : ")
    for i in range(len(tab_result)):
        print(i , "->\t", tab_result[i])
    print("")
    print("The is difference at the line : ")
    for i in range(len(tab_line_dif)):
        print(tab_line_dif[i], end = " ")
    print("")
    return 0

def see_dif(v_tab_result:list, v_tab_solved:list):
    ask = ""
    while(ask != "stop"):
        ask = input("Ind of tab : ")
        if (ask != "" and ask != "stop"):
            ind = int(ask)
            compar_txt(v_tab_solved[ind], v_tab_result[ind])
    return 0

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
    v_tab_result, v_tab_solved = verif(tab_unsolved, tab_result, tab_solved)
    see_dif(v_tab_result, v_tab_solved)
    return 0

def main():
    process()

if  __name__ == "__main__":
    main()