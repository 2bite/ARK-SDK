// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpear_Carrot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjSpear_Carrot.ProjSpear_Carrot_C.UserConstructionScript
// ()

void AProjSpear_Carrot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpear_Carrot.ProjSpear_Carrot_C.UserConstructionScript");

	AProjSpear_Carrot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpear_Carrot.ProjSpear_Carrot_C.ExecuteUbergraph_ProjSpear_Carrot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSpear_Carrot_C::ExecuteUbergraph_ProjSpear_Carrot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpear_Carrot.ProjSpear_Carrot_C.ExecuteUbergraph_ProjSpear_Carrot");

	AProjSpear_Carrot_C_ExecuteUbergraph_ProjSpear_Carrot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
