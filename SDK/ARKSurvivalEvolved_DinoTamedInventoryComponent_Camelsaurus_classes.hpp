#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Camelsaurus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C
// 0x0008 (0x0578 - 0x0570)
class UDinoTamedInventoryComponent_Camelsaurus_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:
	class Acamelsaurus_Character_BP_C*                 CamelSaurusCharacter;                                     // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C");
		return ptr;
	}


	void BPInitializeInventory();
	void TakeWaterFromContainers(float amountToTake, float* TakenAmount);
	void FillWaterContainers(float WaterAmount, float* WaterAmountLeft);
	void ExecuteUbergraph_DinoTamedInventoryComponent_Camelsaurus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
