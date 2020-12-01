// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OilJarCrackEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OilJarCrackEmitter.OilJarCrackEmitter_C.UserConstructionScript
// ()

void AOilJarCrackEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OilJarCrackEmitter.OilJarCrackEmitter_C.UserConstructionScript");

	AOilJarCrackEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OilJarCrackEmitter.OilJarCrackEmitter_C.ExecuteUbergraph_OilJarCrackEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOilJarCrackEmitter_C::ExecuteUbergraph_OilJarCrackEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OilJarCrackEmitter.OilJarCrackEmitter_C.ExecuteUbergraph_OilJarCrackEmitter");

	AOilJarCrackEmitter_C_ExecuteUbergraph_OilJarCrackEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
