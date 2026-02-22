import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        try (Scanner input = new Scanner(System.in)) {
            System.out.println("PROGRAM MENGHITUNG VOLUME BANGUN RUANG");
            System.out.println("=====================================\n");
            
            System.out.println("MENCARI VOLUME TABUNG");
            System.out.print("Masukkan jari-jari tabung (cm): ");
            int r = input.nextInt();
            System.out.print("Masukkan tinggi tabung (cm): ");
            int tinggi_tabung = input.nextInt();
            double phi = 3.14;
            double volume_tabung = phi * r * r * tinggi_tabung;
            System.out.println("Jari-jari : " + r + " cm");
            System.out.println("Tinggi    : " + tinggi_tabung + " cm");
            System.out.println("Volume Tabung = " + volume_tabung + " cm³\n");
            
            System.out.println("MENCARI VOLUME BOLA");
            System.out.print("Masukkan jari-jari bola (cm): ");
            int jari_bola = input.nextInt();
            double phi_bola = 3.14;
            double volume_bola = (4.0 / 3.0) * phi_bola * jari_bola * jari_bola * jari_bola;
            System.out.println("Jari-jari : " + jari_bola + " cm");
            System.out.println("Volume Bola = " + volume_bola + " cm³\n");
            
            System.out.println("MENCARI VOLUME LIMAS SEGITIGA");
            System.out.print("Masukkan alas segitiga (cm): ");
            int alas_segitiga = input.nextInt();
            System.out.print("Masukkan tinggi segitiga (cm): ");
            int tinggi_segitiga = input.nextInt();
            System.out.print("Masukkan tinggi limas (cm): ");
            int tinggi_limas = input.nextInt();
            double luas_segitiga = 0.5 * alas_segitiga * tinggi_segitiga;
            double volume_limas_segitiga = (1.0 / 3.0) * luas_segitiga * tinggi_limas;
            System.out.println("Alas Segitiga : " + alas_segitiga + " cm");
            System.out.println("Tinggi Segitiga : " + tinggi_segitiga + " cm");
            System.out.println("Luas Alas : " + luas_segitiga + " cm²");
            System.out.println("Tinggi Limas : " + tinggi_limas + " cm");
            System.out.println("Volume Limas = " + volume_limas_segitiga + " cm³\n");
            
            System.out.println("MENCARI VOLUME BALOK");
            System.out.print("Masukkan panjang balok (cm): ");
            int panjang_balok = input.nextInt();
            System.out.print("Masukkan lebar balok (cm): ");
            int lebar_balok = input.nextInt();
            System.out.print("Masukkan tinggi balok (cm): ");
            int tinggi_balok = input.nextInt();
            double volume_balok = panjang_balok * lebar_balok * tinggi_balok;
            System.out.println("Panjang : " + panjang_balok + " cm");
            System.out.println("Lebar : " + lebar_balok + " cm");
            System.out.println("Tinggi : " + tinggi_balok + " cm");
            System.out.println("Volume Balok = " + volume_balok + " cm³\n");
            
            System.out.println("MENCARI VOLUME KUBUS");
            System.out.print("Masukkan panjang sisi kubus (cm): ");
            int sisi = input.nextInt();
            double volume_kubus = sisi * sisi * sisi;
            System.out.println("Sisi : " + sisi + " cm");
            System.out.println("Volume Kubus = " + volume_kubus + " cm³\n");
            
            System.out.println("MENCARI VOLUME PRISMA SEGIEMPAT");
            System.out.println("Pilih jenis alas prisma:");
            System.out.println("1. Persegi");
            System.out.println("2. Persegi Panjang");
            System.out.print("Pilihan (1/2): ");
            int pilihanPrisma = input.nextInt();
            double luas_alas_prisma = 0;
            
            if (pilihanPrisma == 1) {
                System.out.print("Masukkan panjang sisi persegi (cm): ");
                int s = input.nextInt();
                luas_alas_prisma = s * s;
                System.out.println("Luas Alas (Persegi) = " + luas_alas_prisma + " cm²");
            } else {
                System.out.print("Masukkan panjang alas (cm): ");
                int p = input.nextInt();
                System.out.print("Masukkan lebar alas (cm): ");
                int l = input.nextInt();
                luas_alas_prisma = p * l;
                System.out.println("Luas Alas (Persegi Panjang) = " + luas_alas_prisma + " cm²");
            }
            
            System.out.print("Masukkan tinggi prisma (cm): ");
            int tinggi_prisma = input.nextInt();
            double volume_prisma = luas_alas_prisma * tinggi_prisma;
            System.out.println("Tinggi Prisma : " + tinggi_prisma + " cm");
            System.out.println("Volume Prisma = " + volume_prisma + " cm³\n");
        }
    }
} 