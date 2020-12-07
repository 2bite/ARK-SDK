// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Dragon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Dragon.DinoEntry_Dragon_C.ExecuteUbergraph_DinoEntry_Dragon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Dragon_C::ExecuteUbergraph_DinoEntry_Dragon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Dragon.DinoEntry_Dragon_C.ExecuteUbergraph_DinoEntry_Dragon");

	UDinoEntry_Dragon_C_ExecuteUbergraph_DinoEntry_Dragon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
