#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StriderHeavyCannonEmitter_Explosion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StriderHeavyCannonEmitter_Explosion.StriderHeavyCannonEmitter_Explosion_C
// 0x0000 (0x0518 - 0x0518)
class AStriderHeavyCannonEmitter_Explosion_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StriderHeavyCannonEmitter_Explosion.StriderHeavyCannonEmitter_Explosion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StriderHeavyCannonEmitter_Explosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
