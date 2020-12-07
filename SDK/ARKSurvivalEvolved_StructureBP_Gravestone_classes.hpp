#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBP_Gravestone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureBP_Gravestone.StructureBP_Gravestone_C
// 0x0008 (0x0AF8 - 0x0AF0)
class AStructureBP_Gravestone_C : public ASign_Small_Base_C
{
public:
	class UStructurePaintingComponent*                 StructurePainting1;                                       // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureBP_Gravestone.StructureBP_Gravestone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureBP_Gravestone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
