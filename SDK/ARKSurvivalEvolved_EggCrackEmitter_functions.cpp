// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EggCrackEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EggCrackEmitter.EggCrackEmitter_C.UserConstructionScript
// ()

void AEggCrackEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EggCrackEmitter.EggCrackEmitter_C.UserConstructionScript");

	AEggCrackEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EggCrackEmitter.EggCrackEmitter_C.ExecuteUbergraph_EggCrackEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEggCrackEmitter_C::ExecuteUbergraph_EggCrackEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggCrackEmitter.EggCrackEmitter_C.ExecuteUbergraph_EggCrackEmitter");

	AEggCrackEmitter_C_ExecuteUbergraph_EggCrackEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
