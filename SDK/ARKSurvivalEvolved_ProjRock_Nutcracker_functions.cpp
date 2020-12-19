// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjRock_Nutcracker_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjRock_Nutcracker.ProjRock_Nutcracker_C.UserConstructionScript
// ()

void AProjRock_Nutcracker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock_Nutcracker.ProjRock_Nutcracker_C.UserConstructionScript");

	AProjRock_Nutcracker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRock_Nutcracker.ProjRock_Nutcracker_C.ExecuteUbergraph_ProjRock_Nutcracker
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjRock_Nutcracker_C::ExecuteUbergraph_ProjRock_Nutcracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock_Nutcracker.ProjRock_Nutcracker_C.ExecuteUbergraph_ProjRock_Nutcracker");

	AProjRock_Nutcracker_C_ExecuteUbergraph_ProjRock_Nutcracker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
