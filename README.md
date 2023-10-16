# 42_back_to_school

## Day-to-day stuff
- [Basic writing and formatting syntax](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax#quoting-code)
- [42_Exam](https://github.com/JCluzet/42_EXAM) that is now part of [GRADEME.FR](https://grademe.fr/) and can be run via:

```
bash -c "$(curl https://grademe.fr)"
```

## Hacking Vim
### Set variables
- Go to ```.vimrc``` in the ```home directory```
- Create a new line for ```set [whatever it's that you want to do]```

## Hacking the terminal
### Create a new repo on Github
[Adding locally hosted code to GitHub](https://docs.github.com/en/migrations/importing-source-code/using-the-command-line-to-import-source-code/adding-locally-hosted-code-to-github)
```
git init -b main
git add .
git commit -m "First commit"
gh repo create
```