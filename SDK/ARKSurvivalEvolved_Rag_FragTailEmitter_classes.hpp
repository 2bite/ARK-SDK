#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rag_FragTailEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Rag_FragTailEmitter.Rag_FragTailEmitter_C
// 0x0000 (0x0518 - 0x0518)
class ARag_FragTailEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Rag_FragTailEmitter.Rag_FragTailEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Rag_FragTailEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
