// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OilPump_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OilPump.OilPump_C.UserConstructionScript
// ()

void AOilPump_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OilPump.OilPump_C.UserConstructionScript");

	AOilPump_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OilPump.OilPump_C.ExecuteUbergraph_OilPump
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOilPump_C::ExecuteUbergraph_OilPump(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OilPump.OilPump_C.ExecuteUbergraph_OilPump");

	AOilPump_C_ExecuteUbergraph_OilPump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
