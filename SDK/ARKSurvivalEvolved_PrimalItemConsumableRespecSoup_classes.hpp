#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableRespecSoup_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C
// 0x0031 (0x0B19 - 0x0AE8)
class UPrimalItemConsumableRespecSoup_C : public UPrimalItemConsumableEatable_BuffingSoup_C
{
public:
	class UPrimalItem*                                 SelfObj;                                                  // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseRespecCooldown;                                        // 0x0AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AF1(0x0003) MISSED OFFSET
	int                                                CooldownTimeInSeconds;                                    // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0AF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0B00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0B08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0B09(0x0007) MISSED OFFSET
	class AShooterPlayerState*                         K2Node_DynamicCast_AsShooterPlayerState;                  // 0x0B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0B18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C");
		return ptr;
	}


	class FString BPGetCustomInventoryWidgetText();
	void GetLastRespecTime(double* LastRespecUtcTime);
	bool BPCanUse(bool* bIgnoreCooldown);
	void BlueprintUsed();
	void ExecuteUbergraph_PrimalItemConsumableRespecSoup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
