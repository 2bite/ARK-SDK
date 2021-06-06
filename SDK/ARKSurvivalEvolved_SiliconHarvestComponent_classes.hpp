#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SiliconHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SiliconHarvestComponent.SiliconHarvestComponent_C
// 0x0000 (0x0250 - 0x0250)
class USiliconHarvestComponent_C : public UUseHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SiliconHarvestComponent.SiliconHarvestComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_SiliconHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
