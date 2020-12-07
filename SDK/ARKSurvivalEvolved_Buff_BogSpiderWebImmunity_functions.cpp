// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BogSpiderWebImmunity_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BogSpiderWebImmunity.Buff_BogSpiderWebImmunity_C.UserConstructionScript
// ()

void ABuff_BogSpiderWebImmunity_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderWebImmunity.Buff_BogSpiderWebImmunity_C.UserConstructionScript");

	ABuff_BogSpiderWebImmunity_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderWebImmunity.Buff_BogSpiderWebImmunity_C.ExecuteUbergraph_Buff_BogSpiderWebImmunity
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BogSpiderWebImmunity_C::ExecuteUbergraph_Buff_BogSpiderWebImmunity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderWebImmunity.Buff_BogSpiderWebImmunity_C.ExecuteUbergraph_Buff_BogSpiderWebImmunity");

	ABuff_BogSpiderWebImmunity_C_ExecuteUbergraph_Buff_BogSpiderWebImmunity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
