// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RegrowEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RegrowEmitter.RegrowEmitter_C.UserConstructionScript
// ()

void ARegrowEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RegrowEmitter.RegrowEmitter_C.UserConstructionScript");

	ARegrowEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RegrowEmitter.RegrowEmitter_C.ExecuteUbergraph_RegrowEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARegrowEmitter_C::ExecuteUbergraph_RegrowEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegrowEmitter.RegrowEmitter_C.ExecuteUbergraph_RegrowEmitter");

	ARegrowEmitter_C_ExecuteUbergraph_RegrowEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
