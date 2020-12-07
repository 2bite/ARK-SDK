// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_C4Tripwire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function C4Tripwire.C4Tripwire_C.UserConstructionScript
// ()

void AC4Tripwire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Tripwire.C4Tripwire_C.UserConstructionScript");

	AC4Tripwire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C4Tripwire.C4Tripwire_C.ExecuteUbergraph_C4Tripwire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AC4Tripwire_C::ExecuteUbergraph_C4Tripwire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Tripwire.C4Tripwire_C.ExecuteUbergraph_C4Tripwire");

	AC4Tripwire_C_ExecuteUbergraph_C4Tripwire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
