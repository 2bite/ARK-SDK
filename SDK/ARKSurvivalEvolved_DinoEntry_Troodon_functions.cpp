// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Troodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Troodon.DinoEntry_Troodon_C.ExecuteUbergraph_DinoEntry_Troodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Troodon_C::ExecuteUbergraph_DinoEntry_Troodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Troodon.DinoEntry_Troodon_C.ExecuteUbergraph_DinoEntry_Troodon");

	UDinoEntry_Troodon_C_ExecuteUbergraph_DinoEntry_Troodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
