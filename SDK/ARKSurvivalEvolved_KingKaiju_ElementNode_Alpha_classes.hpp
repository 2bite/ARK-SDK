#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_ElementNode_Alpha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KingKaiju_ElementNode_Alpha.KingKaiju_ElementNode_Alpha_C
// 0x0000 (0x1C8C - 0x1C8C)
class AKingKaiju_ElementNode_Alpha_C : public AKingKaiju_ElementNode_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KingKaiju_ElementNode_Alpha.KingKaiju_ElementNode_Alpha_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_KingKaiju_ElementNode_Alpha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
