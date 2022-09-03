#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Flag_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Flag_SM.Flag_SM_C
// 0x0008 (0x0AF0 - 0x0AE8)
class AFlag_SM_C : public AStructureBaseBP_C
{
public:
	class UStructurePaintingComponent*                 StructurePainting1;                                       // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Flag_SM.Flag_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Flag_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
