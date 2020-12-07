// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Allosaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Allosaurus.DinoEntry_Allosaurus_C.ExecuteUbergraph_DinoEntry_Allosaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Allosaurus_C::ExecuteUbergraph_DinoEntry_Allosaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Allosaurus.DinoEntry_Allosaurus_C.ExecuteUbergraph_DinoEntry_Allosaurus");

	UDinoEntry_Allosaurus_C_ExecuteUbergraph_DinoEntry_Allosaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
