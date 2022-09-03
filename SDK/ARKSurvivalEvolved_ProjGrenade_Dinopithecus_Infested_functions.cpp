// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGrenade_Dinopithecus_Infested_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjGrenade_Dinopithecus_Infested.ProjGrenade_Dinopithecus_Infested_C.UserConstructionScript
// ()

void AProjGrenade_Dinopithecus_Infested_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrenade_Dinopithecus_Infested.ProjGrenade_Dinopithecus_Infested_C.UserConstructionScript");

	AProjGrenade_Dinopithecus_Infested_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGrenade_Dinopithecus_Infested.ProjGrenade_Dinopithecus_Infested_C.ExecuteUbergraph_ProjGrenade_Dinopithecus_Infested
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGrenade_Dinopithecus_Infested_C::ExecuteUbergraph_ProjGrenade_Dinopithecus_Infested(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrenade_Dinopithecus_Infested.ProjGrenade_Dinopithecus_Infested_C.ExecuteUbergraph_ProjGrenade_Dinopithecus_Infested");

	AProjGrenade_Dinopithecus_Infested_C_ExecuteUbergraph_ProjGrenade_Dinopithecus_Infested_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
