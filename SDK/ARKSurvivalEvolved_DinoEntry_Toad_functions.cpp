// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Toad_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Toad.DinoEntry_Toad_C.ExecuteUbergraph_DinoEntry_Toad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Toad_C::ExecuteUbergraph_DinoEntry_Toad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Toad.DinoEntry_Toad_C.ExecuteUbergraph_DinoEntry_Toad");

	UDinoEntry_Toad_C_ExecuteUbergraph_DinoEntry_Toad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
