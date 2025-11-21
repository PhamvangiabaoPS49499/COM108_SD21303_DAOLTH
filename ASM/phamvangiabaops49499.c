#include <stdio.h>
#include <stdlib.h> // Cần thiết cho lệnh system("cls") hoặc system("clear")

// KHAI BÁO CÁC HÀM CHỨC NĂNG (Chỉ khai báo, chưa định nghĩa)
void chuc_nang_1_kiem_tra_so_nguyen();
void chuc_nang_2_uoc_boi_so();
void chuc_nang_3_tinh_tien_karaoke();
void chuc_nang_4_tinh_tien_dien();
void chuc_nang_5_doi_tien();
void chuc_nang_6_tinh_lai_suat_vay_tra_gop();
void chuc_nang_7_vay_tien_mua_xe();
void chuc_nang_8_sap_xep_thong_tin_sinh_vien();
void chuc_nang_9_game_fpoly_lott();
void chuc_nang_10_tinh_toan_phan_so();

void hien_thi_menu() {
    int choice;

    do {              
        printf("\n======================================================\n");
        printf("=======CHƯƠNG TRÌNH TỔNG HỢP (10 CHỨC NĂNG)=======\n");
        printf("======================================================\n");
        
        // 10 Chức năng theo yêu cầu của Assignment
        printf("1. Chức năng số 1: Kiểm tra số nguyên (nguyên, tố, chính phương)\n");
        printf("2. Chức năng số 2: Tìm Ước số chung và Bội số chung của 2 số\n"); 
        printf("3. Chức năng số 3: Chương trình tính tiền cho quán Karaoke\n"); 
        printf("4. Chức năng số 4: Tính tiền điện\n"); 
        printf("5. Chức năng số 5: Chức năng đổi tiền\n"); 
        printf("6. Chức năng số 6: Tính lãi suất vay ngân hàng vay trả góp\n"); 
        printf("7. Chức năng số 7: Xây dựng chương trình vay tiền mua xe\n");
        printf("8. Chức năng số 8: Sắp xếp thông tin sinh viên\n"); 
        printf("9. Chức năng số 9: Xây dựng game FPOLY-LOTT (2/15)\n"); 
        printf("10. Chức năng số 10: Xây dựng chương trình tính toán phân số\n");
        
        printf("0. Thoát chương trình\n");
        printf("======================================================\n");
        
        printf("Nhap lua chon cua ban (0-10): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n>>> Chon Chuc nang 1: Kiểm tra số nguyên\n");
                
                break;
            case 2:
                printf("\n>>> Chon Chuc nang 2: Tìm Ước số chung và Bội số chung\n");
                
                break;
            case 3:
                printf("\n>>> Chon Chuc nang 3: Tính tiền Karaoke\n");
                
                break;
            case 4:
                printf("\n>>> Chon Chuc nang 4: Tính tiền điện\n");
                
                break;
            case 5:
                printf("\n>>> Chon Chuc nang 5: Đổi tiền\n");
                
                break;
            case 6:
                printf("\n>>> Chon Chuc nang 6: Tính lãi suất vay trả góp\n");
                
                break;
            case 7:
                printf("\n>>> Chon Chuc nang 7: Vay tiền mua xe\n");
                
                break;
            case 8:
                printf("\n>>> Chon Chuc nang 8: Sắp xếp thông tin sinh viên\n");
                
                break;
            case 9:
                printf("\n>>> Chon Chuc nang 9: Game FPOLY-LOTT\n");
                
                break;
            case 10:
                printf("\n>>> Chon Chuc nang 10: Tính toán phân số\n");
                
                break;
            case 0:
                printf("\nThoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("\nLua chon khong hop le. Vui long nhap lai.\n");
                break;
        }

        // Đợi người dùng nhấn Enter trước khi tiếp tục/quay lại menu
        if (choice != 0) {
            printf("\nNhan Enter de tiep tuc...");
            fflush(stdin);
            getchar();
        }

    } while (choice != 0);
}

int main() {
    hien_thi_menu();
    return 0;
}