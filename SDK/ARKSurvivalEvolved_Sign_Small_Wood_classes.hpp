#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sign_Small_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sign_Small_Wood.Sign_Small_Wood_C
// 0x0008 (0x0AF8 - 0x0AF0)
class ASign_Small_Wood_C : public ASign_Small_Base_C
{
public:
	class UStructurePaintingComponent*                 StructurePainting1;                                       // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sign_Small_Wood.Sign_Small_Wood_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Sign_Small_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
