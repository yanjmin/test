git init  //初始化

git add . //添加文件
git add file //添加文件
git add *
git commit 
git commit -m "info" 




git config --global --unset http.proxy 
git config --global --unset https.proxy





git push 命令用于从将本地的分支版本上传到远程并合并。
git push <远程主机名> <本地分支名>:<远程分支名>
如果本地分支名与远程分支名相同，则可以省略冒号：
git push <远程主机名> <本地分支名>




查看本地仓库目前只有一个分支 master。查看远程仓库中的分支名，发现没有

因为你的本地仓库没有与远程仓库建立关联，或者远程仓库中确实只有一个分支。使用如下命令关联远程仓库。执行以下命令将远程仓库的地址与本地仓库关联起来（如果已经关联过，则可以跳过此步骤）：

git remote add origin <远程仓库URL>



git version
git config --list


git status 

//配置
git config --global user.name  "lili" 
git config --global user.email "6321787@163.com"





$ git branch branchname   //创建分支命令
$ git checkout branchname    //切换分支命令
$ git merge     //合并分支命令
//branchname是你想要创建的分支的名称

