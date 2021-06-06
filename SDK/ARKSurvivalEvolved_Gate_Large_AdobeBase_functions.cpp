// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gate_Large_AdobeBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gate_Large_AdobeBase.Gate_Large_AdobeBase_C.UserConstructionScript
// ()

void AGate_Large_AdobeBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gate_Large_AdobeBase.Gate_Large_AdobeBase_C.UserConstructionScript");

	AGate_Large_AdobeBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gate_Large_AdobeBase.Gate_Large_AdobeBase_C.ExecuteUbergraph_Gate_Large_AdobeBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGate_Large_AdobeBase_C::ExecuteUbergraph_Gate_Large_AdobeBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gate_Large_AdobeBase.Gate_Large_AdobeBase_C.ExecuteUbergraph_Gate_Large_AdobeBase");

	AGate_Large_AdobeBase_C_ExecuteUbergraph_Gate_Large_AdobeBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
