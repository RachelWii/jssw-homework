#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

public class everydayjava {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
        scanner.close();
        // �ж��Ƿ����������鶨�����
        if (isValidArrayDeclaration(input)) {
            // ��ȡ�������ͳ���
            String[] tokens = input.split("\\[|\\]");
            String arrayName = tokens[0].trim();
            int arrayLength = Integer.parseInt(tokens[1].trim());
            // �ж��Ƿ������ʼ������
            if (input.contains("{")) {
                // ��ȡ�������ڵĳ�ʼ������
                String initData = input.split("\\{")[1].split("\\}")[0].trim();
                String[] initDataArray = initData.split("\\s*,\\s*");
                printInitializedData(arrayName, arrayLength, initDataArray);
            } else {
                // û�г�ʼ�����ݣ����N
                printUninitializedData(arrayLength);
            }
        } else {
            System.out.println("��Ч���룡");
        }
    }
    // �ж��Ƿ��ǺϷ����������鶨�����
    private static boolean isValidArrayDeclaration(String input) {
        // �޸�������ʽ
        return input.matches("^\\s*int\\s+[a-zA-Z_]\\w*\\s*\\[\\s*\\d+\\s*\\](\\s*=\\s*\\{.*\\})?\\s*;$");
    }
    // �����ʼ������
    private static void printInitializedData(String arrayName, int arrayLength, String[] initDataArray) {
        int[] dataArray = new int[arrayLength];
        // ����ʼ�����ݷ�������
        for (int i = 0; i < Math.min(initDataArray.length, arrayLength); i++) {
            dataArray[i] = Integer.parseInt(initDataArray[i].trim());
        }
        // �����ʼ�����ݣ�����Ĳ�����0���
        for (int i = 0; i < arrayLength; i++) {
            System.out.print(dataArray[i] + " ");
        }
        System.out.println();
    }
 
    // ���δ��ʼ�����ݣ���N����
    private static void printUninitializedData(int arrayLength) {
        for (int i = 0; i < arrayLength; i++) {
            System.out.print("N ");
        }
        System.out.println();
    }
}
	return 0;
}
