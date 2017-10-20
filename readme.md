    1  mkdir first_repo
    2  ls
    3  cd Pulpit
    4  mkdir first_repo
    5  git
    6  sudo apt install git
    7  cd first_repo/
    8  touch test.txt
    9  nano test.txt
   10  git init
   11  git status
   12  git add test.txt
   13  git commit
   14  git config --global user.email "sylwek.wielun@gmail.com"
   15  git config --global user.name "sylwek84"
   16  git log
   17  git commit
   18  nano test.txt
   19  git status
   20  git add .
   21  git commit -m"zmienilem"
   22  git log
   23  nano test.txt 
   24  git status
   25  git commit -m"kolejna proba"
   26  git status
   27  git commit -m"kolejnazmiana"
   28  git commit -m "kolejnazmiana"
   29  git add .
   30  git status
   31  git commit -m "kolejnazmiana"
   32  git log
   33  git commit
   34  git remote add origin http://github.com/sylwek84/first_repo.git
   35  git push -u origin master
   36  git remote add origin https://github.com/sylwek84/first_repo.git
   37  git push -u origin master
   38  git status
   39  git push
   40  nano ~/.gitconfig
   41  git add .
   42  git commit
   43  git push
   44  nano ~/.gitconfig
   45  history > readme.md
   46  git add .
   47  git commit -m "praca domowa"
   48  git push
   49  git --help
   50  cd Pulpit
   51  pwd
   52  mkdir pierwszy_program
   53  cd pierwszy_program
   54  pwd
   55  touch program1.c
   56  nano program1.c
   57  gcc program1.c -o program1.o
   58  ls
   59  ls -la
   60  ./program1.o
   61  nano program1.c
   62  ./program1.o
   63  nano program1.c
   64  ls -la
   65  gcc program1.c -o program1.o
   66  ./program1.c
   67  ./program1.o
   68  nano program1.c
   69  git init
   70  ls -la
   71  git status
   72  touch .gitignore
   73  ls -la
   74  nano .gitignore
   75  git status
   76  git add .
   77  git status
   78  git commit -m "implementacja pierwszych programow w jezyku C"
   79  ls -la
   80  git log
   81  git remote add origin https://github.com/sylwek84/program.git
   82  git push -u origin master
   83  git remote -v
   84  git status
   85  touch program2.c
   86  nano program2.c
   87  gcc program2.c -o program2.o
   88  ./program2.o
   89  nano program2.c
   90  gcc program2.c -o program2.o
   91  ./program2.o
   92  nano program2.c
   93  gcc program2.c -o program2.o
   94  git status
   95  git push
   96  git add .
   97  git push
   98  ls - la
   99  ls
  100  git push
  101  git log
  102  gcc program2.c -o program2.o
  103  ./program2.o
  104  git add .
  105  git status
  106  git commit -m "drugi program"
  107  git push
  108  nano program2.c
  109  gcc program2.c -o program2.o
  110  git commit -m "zmiany1"
  111  git add .
  112  git commit -m "zmiany1"
  113  git push
  114  git add .
  115  git commit - m "mnozenie i dodawanie"
  116  gcc program2.c -o program2.o
  117  history > readme.md
