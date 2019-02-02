/******************文件描述****************************
*作者:凤园迪
*日期:2019.2.1
*内容:操作图像文件的工具库
*修订:2019.2.1------------v1.0   首次发行
******************************************************/
#ifndef IMAGE_File
#define IMAGE_File

#ifdef __cplusplus
extern "C"{
#endif
extern bool AttachFromFile(CFile *File);
extern bool SaveToFile(CFile *File);
extern int GetHeight(CFile *File);
extern int GetWidthPixel(CFile *File);
extern int GetWidthByte(CFile *File);
extern bool IsValidate(CFile *File);
extern bool IsBinaryImg(CFile *File);
extern bool IsIndexedImg(CFile *File);
extern bool Index2Gray(CFile *File);
extern bool Gray2Index(CFile *File);
extern bool CreateNewImg(CFile *File);
extern bool Draw(CFile *File);



#ifdef __cplusplus
}
#endif