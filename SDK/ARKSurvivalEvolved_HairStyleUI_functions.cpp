// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HairStyleUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HairStyleUI.HairStyleUI_C.ExecuteUbergraph_HairStyleUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHairStyleUI_C::ExecuteUbergraph_HairStyleUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HairStyleUI.HairStyleUI_C.ExecuteUbergraph_HairStyleUI");

	UHairStyleUI_C_ExecuteUbergraph_HairStyleUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
