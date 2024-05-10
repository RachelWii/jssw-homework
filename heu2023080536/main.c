#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

public class everydayjava {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
        scanner.close();
        // 判断是否是整数数组定义语句
        if (isValidArrayDeclaration(input)) {
            // 提取数组名和长度
            String[] tokens = input.split("\\[|\\]");
            String arrayName = tokens[0].trim();
            int arrayLength = Integer.parseInt(tokens[1].trim());
            // 判断是否包含初始化数据
            if (input.contains("{")) {
                // 提取大括号内的初始化数据
                String initData = input.split("\\{")[1].split("\\}")[0].trim();
                String[] initDataArray = initData.split("\\s*,\\s*");
                printInitializedData(arrayName, arrayLength, initDataArray);
            } else {
                // 没有初始化数据，输出N
                printUninitializedData(arrayLength);
            }
        } else {
            System.out.println("无效输入！");
        }
    }
    // 判断是否是合法的整数数组定义语句
    private static boolean isValidArrayDeclaration(String input) {
        // 修改正则表达式
        return input.matches("^\\s*int\\s+[a-zA-Z_]\\w*\\s*\\[\\s*\\d+\\s*\\](\\s*=\\s*\\{.*\\})?\\s*;$");
    }
    // 输出初始化数据
    private static void printInitializedData(String arrayName, int arrayLength, String[] initDataArray) {
        int[] dataArray = new int[arrayLength];
        // 将初始化数据放入数组
        for (int i = 0; i < Math.min(initDataArray.length, arrayLength); i++) {
            dataArray[i] = Integer.parseInt(initDataArray[i].trim());
        }
        // 输出初始化数据，不足的部分用0填充
        for (int i = 0; i < arrayLength; i++) {
            System.out.print(dataArray[i] + " ");
        }
        System.out.println();
    }
 
    // 输出未初始化数据，用N代替
    private static void printUninitializedData(int arrayLength) {
        for (int i = 0; i < arrayLength; i++) {
            System.out.print("N ");
        }
        System.out.println();
    }
}
	return 0;
}
