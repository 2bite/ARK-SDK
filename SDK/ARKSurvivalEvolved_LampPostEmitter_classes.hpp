#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LampPostEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LampPostEmitter.LampPostEmitter_C
// 0x0008 (0x0508 - 0x0500)
class ALampPostEmitter_C : public ACampFireEmitter_C
{
public:
	class USpotLightComponent*                         SpotLight1;                                               // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LampPostEmitter.LampPostEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_LampPostEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif