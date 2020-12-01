#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_BeeHive_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C
// 0x002C (0x0589 - 0x055D)
class UPrimalInventoryBP_BeeHive_C : public UPrimalInventoryBP_BaseAutoGenerateItems_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x055D(0x0003) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_Event_ForPC;                                       // 0x0560(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_K2_GetPawn_ReturnValue;                          // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0578(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasBuff_ReturnValue;                             // 0x0588(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C");
		return ptr;
	}


	void BPInventoryRefresh();
	void TryToConsumeFlowers(int NumToConsume, int* NumFailedToConsume, int* NumActuallyConsumed);
	void BPAccessedInventory(class AShooterPlayerController** ForPC);
	void ExecuteUbergraph_PrimalInventoryBP_BeeHive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
