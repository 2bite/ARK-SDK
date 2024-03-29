#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Bola_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Bola.Buff_Bola_C
// 0x00AA (0x0A22 - 0x0978)
class ABuff_Bola_C : public APrimalBuff
{
public:
	TArray<struct FName>                               BolaSockets;                                              // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxBolaDragWeight;                                        // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	double                                             LastStruggleTime;                                         // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 WrappedMesh;                                              // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      K2Node_Event_ForInstigator;                               // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x09A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x09B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09B1(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x09B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x09B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x09C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09C1(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x09C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x09C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x09C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x09CA(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item;                                  // 0x09CC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x09D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetSocketBoneName_ReturnValue;                   // 0x09D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue;                   // 0x09E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x09E1(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        CallFunc_AddComponent_ReturnValue;                        // 0x09E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform;// 0x09F0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0A20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetStaticMesh_ReturnValue;                       // 0x0A21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Bola.Buff_Bola_C");
		return ptr;
	}


	void BPHandleOnStartFire(bool* bFromGamepad);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void BuffTickServer(float* DeltaTime);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void BPSetupForInstigator(class AActor** ForInstigator);
	void ExecuteUbergraph_Buff_Bola(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
