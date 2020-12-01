#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StorageBox_Huge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_StorageBox_Huge.PrimalItemStructure_StorageBox_Huge_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_StorageBox_Huge_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_StorageBox_Huge.PrimalItemStructure_StorageBox_Huge_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_StorageBox_Huge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
