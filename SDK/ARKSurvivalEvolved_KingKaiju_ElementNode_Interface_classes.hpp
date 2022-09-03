#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_ElementNode_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KingKaiju_ElementNode_Interface.KingKaiju_ElementNode_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UKingKaiju_ElementNode_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KingKaiju_ElementNode_Interface.KingKaiju_ElementNode_Interface_C");
		return ptr;
	}


	void SetVar_KKCharacter(class AActor* KKChar);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
