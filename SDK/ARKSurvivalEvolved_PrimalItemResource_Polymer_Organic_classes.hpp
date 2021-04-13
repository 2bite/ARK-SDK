#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Polymer_Organic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Polymer_Organic.PrimalItemResource_Polymer_Organic_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemResource_Polymer_Organic_C : public UPrimalItemResource_Polymer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Polymer_Organic.PrimalItemResource_Polymer_Organic_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Polymer_Organic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
