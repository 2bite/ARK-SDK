#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C.SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C_C
// 0x0010 (0x0E68 - 0x0E58)
class ASupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C_C : public ASupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C
{
public:
	class UPointLightComponent*                        PointLight1;                                              // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_VolcanicCrystal_C*        PrimalInventoryBP_VolcanicCrystal_C1;                     // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C.SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
