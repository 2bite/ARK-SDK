#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TaxidermyBase_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_TaxidermyBase_Small.Structure_TaxidermyBase_Small_C
// 0x0000 (0x0F11 - 0x0F11)
class AStructure_TaxidermyBase_Small_C : public AStructure_TaxidermyBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_TaxidermyBase_Small.Structure_TaxidermyBase_Small_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Structure_TaxidermyBase_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
