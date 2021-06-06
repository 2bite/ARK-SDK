// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Kairuku_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Kairuku.DinoEntry_Kairuku_C.ExecuteUbergraph_DinoEntry_Kairuku
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Kairuku_C::ExecuteUbergraph_DinoEntry_Kairuku(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Kairuku.DinoEntry_Kairuku_C.ExecuteUbergraph_DinoEntry_Kairuku");

	UDinoEntry_Kairuku_C_ExecuteUbergraph_DinoEntry_Kairuku_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
