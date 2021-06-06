// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PreservingBinEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PreservingBinEmitter.PreservingBinEmitter_C.UserConstructionScript
// ()

void APreservingBinEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PreservingBinEmitter.PreservingBinEmitter_C.UserConstructionScript");

	APreservingBinEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PreservingBinEmitter.PreservingBinEmitter_C.ExecuteUbergraph_PreservingBinEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APreservingBinEmitter_C::ExecuteUbergraph_PreservingBinEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PreservingBinEmitter.PreservingBinEmitter_C.ExecuteUbergraph_PreservingBinEmitter");

	APreservingBinEmitter_C_ExecuteUbergraph_PreservingBinEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
