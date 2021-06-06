// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_SpaceDolphin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_SpaceDolphin.DinoEntry_SpaceDolphin_C.ExecuteUbergraph_DinoEntry_SpaceDolphin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_SpaceDolphin_C::ExecuteUbergraph_DinoEntry_SpaceDolphin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_SpaceDolphin.DinoEntry_SpaceDolphin_C.ExecuteUbergraph_DinoEntry_SpaceDolphin");

	UDinoEntry_SpaceDolphin_C_ExecuteUbergraph_DinoEntry_SpaceDolphin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
