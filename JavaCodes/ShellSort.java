// Implementação de como é um Shell Sort

import java.util.*;

class Shell{
	public static void main(String[] args) {
		int nums[] = new int[10];
		int h = 1;
		int n = nums.length;
		Random gerador = new Random();
		
		for(int i=0; i<nums.length; i++){
            nums[i] = gerador.nextInt(15);
        }
		
		System.out.print("\n\nOriginal\n");
        for(int b=0;b<nums.length;b++){
            System.out.printf("%d, ", nums[b]);
        }
		
		while(h < n) {
			h = h * 3 + 1;
		}
		
		h = h / 3;
		int c, j;
		
		while (h > 0) {
			for (int i = h; i < n; i++) {
				c = nums[i];
				j = i;
				while (j >= h && nums[j - h] > c) {
					nums[j] = nums[j - h];
					j = j - h;
				}
				nums[j] = c;
			}
			h = h / 2;
		}
		System.out.print("\n\nMetodo Shell\n");
        for(int b=0;b<nums.length;b++){
            System.out.printf("%d, ", nums[b]);
        }
	}
}
