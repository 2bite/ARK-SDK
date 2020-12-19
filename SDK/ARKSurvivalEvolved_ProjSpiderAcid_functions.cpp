// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpiderAcid_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjSpiderAcid.ProjSpiderAcid_C.UserConstructionScript
// ()

void AProjSpiderAcid_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpiderAcid.ProjSpiderAcid_C.UserConstructionScript");

	AProjSpiderAcid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpiderAcid.ProjSpiderAcid_C.ExecuteUbergraph_ProjSpiderAcid
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSpiderAcid_C::ExecuteUbergraph_ProjSpiderAcid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpiderAcid.ProjSpiderAcid_C.ExecuteUbergraph_ProjSpiderAcid");

	AProjSpiderAcid_C_ExecuteUbergraph_ProjSpiderAcid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
