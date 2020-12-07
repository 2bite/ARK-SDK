#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateBaseBP_Instantaneous_VolcanoCrystal.SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C
// 0x0008 (0x0E78 - 0x0E70)
class ASupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C : public APrimalStructureItemContainer_SupplyCrate
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateBaseBP_Instantaneous_VolcanoCrystal.SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateBaseBP_Instantaneous_VolcanoCrystal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
