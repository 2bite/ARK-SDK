#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBP_Gravestone_HW_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureBP_Gravestone_HW.StructureBP_Gravestone_HW_C
// 0x0000 (0x0AD0 - 0x0AD0)
class AStructureBP_Gravestone_HW_C : public ASign_Small_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureBP_Gravestone_HW.StructureBP_Gravestone_HW_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureBP_Gravestone_HW(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
