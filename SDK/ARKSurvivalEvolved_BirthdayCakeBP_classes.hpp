#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BirthdayCakeBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BirthdayCakeBP.BirthdayCakeBP_C
// 0x0130 (0x1021 - 0x0EF1)
class ABirthdayCakeBP_C : public AStructureSeatingBaseBP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0EF1(0x0007) MISSED OFFSET
	class UBoxComponent*                               Box1;                                                     // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender1;                                              // 0x0F00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Sparkler2;                                                // 0x0F08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Sparkler1;                                                // 0x0F10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    CyanStar2;                                                // 0x0F18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    CyanStar1;                                                // 0x0F20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    YellowStar1;                                              // 0x0F28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    YellowStar2;                                              // 0x0F30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PinkStar;                                                 // 0x0F38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem5;                                          // 0x0F40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem4;                                          // 0x0F48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem3;                                          // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0F60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0F68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOpen;                                                  // 0x0F70(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0F71(0x0007) MISSED OFFSET
	class FString                                      MessageString;                                            // 0x0F78(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	float                                              DisplayTextCounter;                                       // 0x0F88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumDisplayStringchars;                                    // 0x0F8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSetMessageString;                                        // 0x0F90(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0F91(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0F94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0F98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0F99(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x0FA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0FA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0FB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0FB1(0x0007) MISSED OFFSET
	struct FBPNetExecParams                            K2Node_MakeStruct_BPNetExecParams;                        // 0x0FB8(0x0040) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsInputKeyDown_ReturnValue;                      // 0x0FF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsInputKeyDown_ReturnValue2;                     // 0x0FF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0FFA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0FFB(0x0001) MISSED OFFSET
	int                                                CallFunc_Len_ReturnValue;                                 // 0x0FFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Len_ReturnValue2;                                // 0x1000(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue;                     // 0x1004(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Left_ReturnValue;                                // 0x1008(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x1018(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Len_ReturnValue3;                                // 0x101C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x1020(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BirthdayCakeBP.BirthdayCakeBP_C");
		return ptr;
	}


	bool BPPreventReleaseSeatingStructure(class AShooterCharacter** ForSitter);
	void BPDefaultProcessEditText(class AShooterPlayerController** ForPC, class FString* TextToUse, bool* checkedBox);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void OnRep_bIsOpen();
	void BPReleasedPlayer(class AShooterCharacter** ReleasedChar, int* AtSeatNumber);
	void BPSeatedPlayer(class AShooterCharacter** SeatedChar, int* AtSeatNumber);
	void UserConstructionScript();
	void SeatedTicker();
	void ForceDestroyMe();
	void DisplayTextTicker();
	void ExecuteUbergraph_BirthdayCakeBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
