// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TribeMemberButton_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TribeMemberButton.TribeMemberButton_C.ExecuteUbergraph_TribeMemberButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTribeMemberButton_C::ExecuteUbergraph_TribeMemberButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TribeMemberButton.TribeMemberButton_C.ExecuteUbergraph_TribeMemberButton");

	UTribeMemberButton_C_ExecuteUbergraph_TribeMemberButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
