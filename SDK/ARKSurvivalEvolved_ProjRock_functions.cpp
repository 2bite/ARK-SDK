// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjRock_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjRock.ProjRock_C.UserConstructionScript
// ()

void AProjRock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock.ProjRock_C.UserConstructionScript");

	AProjRock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRock.ProjRock_C.ExecuteUbergraph_ProjRock
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjRock_C::ExecuteUbergraph_ProjRock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock.ProjRock_C.ExecuteUbergraph_ProjRock");

	AProjRock_C_ExecuteUbergraph_ProjRock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
