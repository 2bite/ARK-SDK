#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LampPostEmitterOmni_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LampPostEmitterOmni.LampPostEmitterOmni_C
// 0x0008 (0x0520 - 0x0518)
class ALampPostEmitterOmni_C : public ACampFireEmitter_C
{
public:
	class UPointLightComponent*                        PointLight1;                                              // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LampPostEmitterOmni.LampPostEmitterOmni_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_LampPostEmitterOmni(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
