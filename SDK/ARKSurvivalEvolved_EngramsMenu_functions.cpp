// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramsMenu_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramsMenu.EngramsMenu_C.ExecuteUbergraph_EngramsMenu
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramsMenu_C::ExecuteUbergraph_EngramsMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramsMenu.EngramsMenu_C.ExecuteUbergraph_EngramsMenu");

	UEngramsMenu_C_ExecuteUbergraph_EngramsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
